document.addEventListener('DOMContentLoaded', function() {
    const kaleidoscope = document.querySelector('.kaleidoscope');
    const startButton = document.getElementById('startButton');
    const stopButton = document.getElementById('stopButton');
    let angle = 0;
    let animationFrameId;

    function animate() {
        angle += 0.1;
        kaleidoscope.style.transform = `rotate(${angle}deg)`;
        animationFrameId = requestAnimationFrame(animate);
    }

    startButton.addEventListener('click', function() {
        if (!animationFrameId) {
            animate();
        }
    });

    stopButton.addEventListener('click', function() {
        if (animationFrameId) {
            cancelAnimationFrame(animationFrameId);
            animationFrameId = null;
        }
    });
});