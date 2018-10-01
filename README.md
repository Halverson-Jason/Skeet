# Skeet

<h2>Overview</h2>
Skeet or Trap Shooting is a game played by hunters where a clay pigeon is ejected from a throwing device and a marksman attempts to shoot them with a shotgun. S
This program is written using simplified OpenGL libraries . OpenGL will have to be installed and enabled on your machine for this program to work.

 
<h2>Game Rules and Specification</h2>
<ol>
  <li>Whenever there is no pigeon on the screen, a new one is created at random.</li>
  <li>To make it more of a challenge, there are three types of pigeons:</li>
    <ol>
      <li>Standard Bird</li>
        <ul>
          <li>Rendered as a circle with a 15px radius.</li>
          <li>Destroyed with one hit.</li>
          <li>1 Point is awarded for hitting it.</li>
        </ul>
      <li>Tough Bird</li>
        <ul>
          <li>Rendered as a circle with a number inside of it.</li>
          <li>The Tough Bird moves more slowly than the others as defined below.</li>
          <li>It takes 3 hits to destroy this bird.</li>
          <li>1 Point is awarded for each hit.</li>
          <li>A bonus of 2 points is awarded if it is destroyed. (3 points per hit, plus the 2 point bonus, means 5 points can be earned.)</li>
        </ul>
      <li>Sacred Bird</li>
        <ul>
          <li>Rendered as a star.</li>
          <li>This bird should not be hit.</li>
          <li>It is destroyed with a single hit.</li>
          <li>A penalty of 10 points is lost if this bird is hit.</li>
        </ul>
    </ol>
  <li>The pigeon type, direction, velocity, and timing to release (delay) are random according to the following constraints:</li>
    <ol>
      <li>The initial position of the bird is anywhere along the left side the screen</li>
      <li>If the bird starts on the top half of the screen, it has a general downward velocity (down and to the right at amounts defined below).</li>
      <li>If the bird starts on the bottom half of the screen, it has a general upward velocity (up and to the right at amounts defined below).</li>
      <li>The horizontal component of the velocity is between 3 and 6 pixels/frame.</li>
      <li>The vertical component of the velocity is between -4 and +4 pixels/frame (positive or negative depending on whether it starts on the top or bottom half of the screen).</li>
      <li>To give the user a greater chance to hit the Tough Bird, it moves more slowly than the others. In particular, its horizontal velocity is a range: 2 to 4, and it's vertical velocity from the range -3 to +3.</li>
      <li>A delay of up to 1 second is introduced before the first bird is released or after each round before the next one is released.</li>
    </ol>
  <li>Rifle</li>
    <ol>
      <li>Rendered as a rectangle.</li>
      <li>The aim is controlled with the left and right arrows.</li>
      <li>Each arrow press changes the aim 3 degrees.</li>
      <li>The rifle cannot be aimed off the screen. (Its movement is limited to 90 degrees.)</li>
    </ol>
   <li>Bullets<//li>
    <ol>
      <li>Rendered as a dot.</li>
      <li>There is no limit to the number of bullets.</li>
      <li>Pressing the space bar fires a new bullet.</li>
      <li>New bullets are aimed in the direction of the rifle.</li>
      <li>Bullets travel at 10 pixels/frame at that angle at which they are fired.</li>
      <li>Bullets are removed if they leave the borders of the screen.</li>
    </ol>
</ol>
