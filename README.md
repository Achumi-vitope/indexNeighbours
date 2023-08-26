## This algorithm was made to determine whether there exist a top, bottom, left, and right neighbouring cells of a given index.
> Note: I had to figure this out myself for the final year project and is only a test case, not the whole project itself.
* Assume a grid of size M, N > 3
* A given point CP, chosen randomly from the grid, be the center of a 3x3 2d Matrix.

### Example: Given a grid of size M, N > 3 :<br>
<table>
  <tr>
    <td>1</td>
    <td>2</td>
    <td>3</td>
    <td>4</td>
    <td>5</td>
  </tr>
  <tr>
    <td>6</td>
    <td>7</td>
    <td>8</td>
    <td>9</td>
    <td>10</td>
  </tr>
  <tr>
    <td>11</td>
    <td>12</td>
    <td>13</td>
    <td>14</td>
    <td>15</td>
  </tr>
  <tr>
    <td>16</td>
    <td>17</td>
    <td>18</td>
    <td>19</td>
    <td>20</td>
  </tr>
  <tr>
    <td>21</td>
    <td>22</td>
    <td>23</td>
    <td>24</td>
    <td>25</td>
  </tr>
</table>

> Note: The numbers 1 to 25 are the digits contained within the indices and not the indices 'themselves'.

+ Let CP or Current Point be <b>13</b>

+ Such that the cells surrounding (closest cells) <b>13</b> become a seperate 2d Matrix:
<table>
  <tr>
    <td>7</td>
    <td>8</td>
    <td>9</td>
  </tr>
  <tr>
    <td>12</td>
    <td><b>13</b></td>
    <td>14</td>
  </tr>
  <tr>
    <td>17</td>
    <td>18</td>
    <td>19</td>
  </tr>
</table>

* Now, this algorith will determine what value does 13's neighbouring top, left, right, and bottom cells hold.


