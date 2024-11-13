document.addEventListener('DOMContentLoaded', function() {
    const kaleidoscope = document.querySelector('.kaleidoscope');
    const startButton = document.getElementById('startButton');
    const stopButton = document.getElementById('stopButton');
    let angle = 0;
    let animationFrameId;

    function animater() {
        angle += 0.1;
        kaleidoscope.style.transform = `rotate(${angle}deg)`;
        animationFrameId = requestAnimationFrame(animater);
    }

    startButton.addEventListener('click', function() {
        if (!animationFrameId) {
            animater();
        }
    });

    stopButton.addEventListener('click', function() {
        if (animationFrameId) {
            cancelAnimationFrame(animationFrameId);
            animationFrameId = null;
        }
    });
});