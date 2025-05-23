document.addEventListener('DOMContentLoaded', function() {
  // Mobile menu toggle
  const mobileMenu = document.createElement('div');
  mobileMenu.className = 'mobile-menu';
  mobileMenu.innerHTML = '☰';
  document.querySelector('.navbar').appendChild(mobileMenu);
  
  mobileMenu.addEventListener('click', function() {
    document.querySelector('.nav-links').classList.toggle('active');
  });

  // Smooth scroll
  document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
      e.preventDefault();
      document.querySelector(this.getAttribute('href')).scrollIntoView({
        behavior: 'smooth'
      });
    });
  });

  // Active page indicator
  const currentPage = location.pathname.split('/').pop();
  document.querySelectorAll('.nav-links a').forEach(link => {
    if (link.getAttribute('href') === currentPage) {
      link.classList.add('active');
    }
  });
});

// Contact form handling
if (document.querySelector('.contact-form')) {
  document.querySelector('.contact-form').addEventListener('submit', function(e) {
    e.preventDefault();
    // Add your form submission logic here
    alert('Thank you for your message! We will respond shortly.');
    this.reset();
  });
}