<p dir="ltr" style="text-align: left;"></p>
<p><span><span style=""><span></span></span></span></p>
<h5><strong style="font-size: 1.17188rem;"><u>Problem:</u></strong><br></h5>
<div>In this exam,&nbsp; you are given an array of sticks with two end points where each end point can be any of the following 3 types: Inwards End, Outwards End and Straight End. An illustration for some possible stick instances are given in the figure below.</div>
<div><img src="https://odtuclass2022f.metu.edu.tr/draftfile.php/36160/user/draft/968667308/stick_types.png" alt="stick types" width="750" height="264" class="atto_image_button_text-bottom"></div>
<div>Each stick has also "size" property. The size differs from 1 to 10.&nbsp; The size of each stick is specified in a different input array. Your task is to build the longest path by combining the sticks end to end. The rules of combination are given as follows:</div>
<div>
    <ul>
        <li>An Inwards end can be combined with an Outwards end only.</li>
        <li>An Outwards end can be combined with an Inwards end only.</li>
        <li>A Straight end can be combined with another Straight end only.</li>
        <li>The path can be started with any type of end. Similarly, it can be finished with any type of end.</li>
        <li>While building the path, you should <strong>preserve the ordering of the sticks given in the input array.</strong> That is; if stick A comes before stick B in the input array, then stick A can not come after stick B in the resulting path.</li>
        <li>You do not have to use all the sticks given in the input array.</li>
        <li>You <strong>should not reverse the sticks</strong>. That is, left and right ends of the stick should not be swapped.</li>
        <li>In order to obtain the same results with the answer key, please obey the rules given in "Implementation" part.</li>
    </ul>
</div>
<div><span style="font-size: 0.9375rem;"><img src="https://odtuclass2022f.metu.edu.tr/draftfile.php/36160/user/draft/968667308/stick_combination.png" alt="stick combination" width="948" height="100" class="atto_image_button_text-bottom"><br></span></div>
<div><span style="font-size: 0.9375rem;">Please examine the examples below. Note that, each stick is defined with its left and right end types . "I" represents Inwards end, "O" represents Outwards end and "S" represents Straight end. For instance, ['I', 'S'] represents a stick starting with Inwards end and ending with Straight end.</span></div>
<div><span style="font-size: 0.9375rem;"><br></span></div>
<div><span style="font-size: 0.9375rem;"><strong>Example IO:<br></strong>
        <p></p>
    </span><span style="font-size: 0.9375rem;"></span><span style="font-size: 0.9375rem;"></span><span style="font-size: 0.9375rem;"></span><span style="font-size: 0.9375rem;">
        <table cellspacing="0" cellpadding="0" border="1">
            <tbody>
                <tr>
                    <td width="604" valign="top">
                        <p><strong>1) Given array arr = { {'I', 'S'}, {'O', 'I'}, {'S', 'O'} }&nbsp; and len = {1, 1, 1}:</strong></p>
                        <p><strong><strong></strong></strong></p>
                        <p></p>
                        <ul>
                            <ul>
                                <li>the longest path is {'I', 'S} + {'S', 'O'}.</li>
                                <li>return value (i.e. max length) is 2 for each of three functions.<strong></strong><br></li>
                                <li>number of&nbsp; recursive calls is 4.</li>
                                <li>at memoization and dynamic programming, final mem array is:&nbsp; &nbsp;&nbsp;</li>
                            </ul>
                        </ul>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div class="editor-indent" style="margin-left: 30px;"></div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">[[0,&nbsp;0,&nbsp;1],&nbsp; <span style="font-size: 0.9375rem;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<br></span></div>
                            <div class="editor-indent" style="margin-left: 30px;">[1,&nbsp;0,&nbsp;1],&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[1,&nbsp;2,&nbsp;1]] .</div>
                            </div>
                        </div>
                        <div><br></div>
                        <div>
                            <p><strong>2) Given array arr = { {'I', 'S'}, {'O', 'I'}, {'S', 'O'} }&nbsp; and len = {1, 5, 2}:</strong></p>
                            <p><strong><strong></strong></strong></p>
                            <p></p>
                            <ul>
                                <ul>
                                    <li>the longest path is {'O', 'I'}.</li>
                                    <li>return value (i.e. max length) is 5 for each of three functions.<strong></strong><br></li>
                                    <li>number of&nbsp; recursive calls is 4.</li>
                                    <li>at memoization and dynamic programming, final mem array is:&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;</li>
                                </ul>
                            </ul>
                        </div>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>
                                    <div>[[0,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                                </div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>
                                    <div>[5,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                                </div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>
                                    <div>[5,&nbsp;3,&nbsp;1]] .</div>
                                </div>
                            </div>
                        </div>
                        <div>
                            <div></div>
                        </div>
                        <p></p>
                        <p><strong>3) Given array arr =&nbsp;{ {'I', 'S'}, {'S', 'S'}, {'O', 'I'}, {'S', 'O'}, {'O', 'O'}, {'I', 'O'}, {'S', 'O'}&nbsp;</strong><strong style="font-size: 0.9375rem;">} and len = {1, 1, 1, 1, 1, 1, 1}:</strong></p>
                        <p></p>
                        <ul>
                            <ul>
                                <li>the longest path is {'I', 'S'} + {'S', 'S'} + {'S', 'O'} + {'I', 'O'}.</li>
                                <li>return value (i.e. max length) is 4 for each of three functions.</li>
                                <li>number of recursive calls is 32.<strong></strong></li>
                                <li>at memoization and dynamic programming, final mem array is:<br></li>
                            </ul>
                        </ul>
                        <p></p>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[[0,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[0,&nbsp;0,&nbsp;2],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[1,&nbsp;0,&nbsp;2],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[1,&nbsp;3,&nbsp;2],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[1,&nbsp;3,&nbsp;2],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[1,&nbsp;4,&nbsp;2],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[1,&nbsp;4,&nbsp;2]] .</div>
                            </div>
                        </div>
                        <p><strong>4) Given array arr = { {'I', 'S'}, {'S', 'S'}, {'O', 'I'}, {'S', 'O'}, {'O', 'O'}, {'I', 'O'}, {'S', 'O'} }</strong><strong>&nbsp;and len = {5,&nbsp;3,&nbsp;3,&nbsp;1,&nbsp;8,&nbsp;5,&nbsp;3}:</strong></p>
                        <p></p>
                        <ul>
                            <ul>
                                <li>the longest path is {'O', 'I'} + {'O', 'O'} + {'I', 'O'}.</li>
                                <li>return value (i.e. max length) is 16 for each of three functions.</li>
                                <li>number of recursive calls is 32.<strong></strong></li>
                                <li>at memoization and dynamic programming, final mem array is:<br></li>
                            </ul>
                        </ul>
                        <p></p>
                        <div>
                            <div>
                                <div></div>
                            </div>
                        </div>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>
                                    <div></div>
                                </div>
                            </div>
                        </div>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[[0,&nbsp;0,&nbsp;5],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[0,&nbsp;0,&nbsp;8],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;0,&nbsp;8],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;9,&nbsp;8],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;11,&nbsp;8],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;16,&nbsp;8],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;16,&nbsp;8]] .</div>
                            </div>
                        </div>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>
                                    <div></div>
                                </div>
                            </div>
                        </div>
                        <div>
                            <div>
                                <div></div>
                            </div>
                        </div>
                        <p></p>
                        <p></p>
                        <p><strong>5) Given array arr =&nbsp;{ {'I', 'S'}, {'S', 'I'}, {'O', 'I'}, {'S', 'O'}, {'O', 'O'}, {'I', 'I'}, {'I', 'O'}, {'S', 'O'}, {'O', 'S'} }</strong><strong>&nbsp;and len = {1, 1, 1, 1, 1, 1, 1, 1, 1}:</strong></p>
                        <p></p>
                        <ul>
                            <ul>
                                <li>the longest path is {'I', 'S'} + {'S', 'I'} + {'O', 'I'} + {'O', 'O'} + {'I', 'I'} + {'O', 'S'}.</li>
                                <li>return value (i.e. max length) is 6 for each of three functions.</li>
                                <li>number of recursive calls is 83.</li>
                                <li>at memoization and dynamic programming, final mem array is:</li>
                            </ul>
                        </ul>
                        <p></p>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[[0,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;2,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;4,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[5,&nbsp;4,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[5,&nbsp;5,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[5,&nbsp;5,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[5,&nbsp;5,&nbsp;6]] .</div>
                            </div>
                        </div>
                        <p></p>
                        <p><strong></strong></p>
                        <p><strong><strong></strong></strong></p>
                        <p><strong>6) Given array arr =&nbsp;{ {'I', 'S'}, {'S', 'I'}, {'O', 'I'}, {'S', 'O'}, {'O', 'O'}, {'I', 'O'}, {'I', 'S'} }</strong><strong>&nbsp;and len = {1, 1, 1, 1, 1, 1, 1}:</strong></p>
                        <p></p>
                        <ul>
                            <ul>
                                <li>the longest path is:</li>
                            </ul>
                        </ul>
                        <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;--&gt;&nbsp;&nbsp;{'I', 'S'} + {'S', 'I'} + {'O', 'I'} + {'O', 'O'} + {'I', 'O'} + {'I', 'S'}.</p>
                        <ul>
                            <ul>
                                <li>return value (i.e. max length) is 6 for each of three functions.</li>
                                <li>number of recursive calls is 53.</li>
                                <li>at memoization and dynamic programming, final mem array is:</li>
                            </ul>
                        </ul>
                        <p></p>
                        <div>
                            <div>
                                <div></div>
                            </div>
                        </div>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>
                                    <div></div>
                                </div>
                            </div>
                        </div>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[[0,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;2,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;4,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;5,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[3,&nbsp;5,&nbsp;6]]&nbsp; .</div>
                            </div>
                        </div>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>
                                    <div> .</div>
                                </div>
                            </div>
                        </div>
                        <div>
                            <div>
                                <div></div>
                            </div>
                        </div>
                        <div>
                            <div>
                                <div><strong></strong></div>
                            </div>
                        </div>
                        <p></p>
                        <p><strong>7) Given array arr =&nbsp;{ {'I', 'S'}, {'S', 'I'}, {'O', 'I'}, {'S', 'O'}, {'O', 'O'}, {'I', 'O'}, {'S', 'O'}, {'O', 'S'} }</strong><strong>&nbsp;and len = {9,&nbsp;9,&nbsp;7,&nbsp;8,&nbsp;7,&nbsp;10,&nbsp;10,&nbsp;5}:</strong></p>
                        <p></p>
                        <ul>
                            <ul>
                                <li>the longest path is {'I', 'S'} + {'S', 'I'} + {'O', 'I'} + {'O', 'O'} + {'I', 'O'}.&nbsp;</li>
                                <li>return value (i.e. max length) is 42 for each of three functions.</li>
                                <li>number of recursive calls is 60.</li>
                                <li>at memoization and dynamic programming, final mem array is:</li>
                            </ul>
                        </ul>
                        <p></p>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[[0,&nbsp;0,&nbsp;9],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[18,&nbsp;0,&nbsp;9],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[25,&nbsp;0,&nbsp;9],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[25,&nbsp;17,&nbsp;9],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[25,&nbsp;32,&nbsp;9],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[25,&nbsp;42,&nbsp;9],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[25,&nbsp;42,&nbsp;9],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[25,&nbsp;42,&nbsp;30]] .</div>
                            </div>
                        </div>
                        <p></p>
                        <p><strong>8) Given array arr =&nbsp;{ {'I', 'S'}, {'I', 'I'}, {'O', 'I'}, {'S', 'O'}, {'S', 'I'}, {'O', 'O'}, {'I', 'S'}, {'S', 'O'}, {'S', 'S'}}</strong><strong>&nbsp;and len = {1, 1, 1, 1, 1, 1, 1, 1, 1}:</strong></p>
                        <p></p>
                        <ul>
                            <ul>
                                <li>there are 4 longest paths:</li>
                            </ul>
                        </ul>
                        <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;--&gt;&nbsp;&nbsp;{'I', 'S'} + {'S', 'I'} + {'O', 'O'} + {'I', 'S'} + {'S', 'O'}&nbsp; and</p>
                        <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;--&gt;&nbsp; {'I', 'S'} + {'S', 'I'} + {'O', 'O'} + {'I', 'S'} + {'S', 'S'}&nbsp; and</p>
                        <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;--&gt;&nbsp; {'I', 'I'} + {'O', 'I'} + {'O', 'O'} + {'I', 'S'} + {'S', 'O'} and&nbsp;</p>
                        <p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;--&gt;&nbsp; {'I', 'I'} + {'O', 'I'} + {'O', 'O'} + {'I', 'S'} + {'S', 'S'}.</p>
                        <ul>
                            <ul>
                                <li>return value (i.e. max length) is 5 for each of three functions.</li>
                                <li>number of recursive calls is 60.</li>
                                <li>at memoization and dynamic programming, final mem array is:</li>
                            </ul>
                        </ul>
                        <p></p>
                        <div class="editor-indent" style="margin-left: 30px;">
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[[0,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[1,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;0,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;2,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;2,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;3,&nbsp;1],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;3,&nbsp;4],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;5,&nbsp;4],&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div>
                            </div>
                            <div class="editor-indent" style="margin-left: 30px;">
                                <div>[2,&nbsp;5,&nbsp;5]] .</div>
                            </div>
                        </div>
                        <p></p>
                    </td>
                </tr>
            </tbody>
        </table>
    </span><br></div>
<h5><strong><u>Implementation:</u></strong></h5>
<div>You will implement three different functions for three different solutions of that problem:<br>
    <ul>
        <li>Direct recursive implementation in&nbsp;<em><strong>recursive_sln()</strong></em></li>
        <li>Recursion with memoization in<strong><em>&nbsp;memoization_sln()</em></strong></li>
        <li>Dynamic programming in<strong><em>&nbsp;dp_sln()</em></strong></li>
    </ul><strong>All three functions</strong>&nbsp;are expected to&nbsp;<strong>return</strong>&nbsp;the answer to the given problem which is&nbsp;<strong>the length of the longest path.&nbsp;</strong>Return&nbsp;<strong>only</strong>&nbsp;the max length value and nothing more.<br>
</div>
<div><br>The number of recursive calls that your recursive function makes should be counted. That number should be stored using the&nbsp;<em><strong>int &amp;number_of_calls&nbsp;</strong></em><strong></strong>variable<em><strong>,&nbsp;</strong></em><strong></strong>which is the last parameter at the definition of the&nbsp;<em>recursive_sln()</em>. Basically, the value of that variable should be incremented by one at each execution of the&nbsp;<em>recursive_sln()&nbsp;</em>function. In order to accomplish that, the increment operation may be done at the first line of the function implementation, as already done in the function template given to you. So,&nbsp;<strong>do not change the first line of the&nbsp;<em>recursive_sln()&nbsp;</em>function and do not manipulate the&nbsp;<em>number_of_calls</em>&nbsp;variable at anywhere else</strong>.&nbsp; Do&nbsp;<strong>not return&nbsp;</strong>that variable. Since it is passed by reference, its final value will be available for testing/grading without returning it. <strong>IMPORTANT:</strong> In order to obtain the same number_of_calls with the answer key, please use the following recurrence relation:<br></div>
<div><br></div>
<div class="editor-indent" style="margin-left: 30px;">
    <div class="editor-indent" style="margin-left: 30px;">
        <div><strong>IF</strong>&nbsp; N == <em>size</em>-1</div>
    </div>
    <div class="editor-indent" style="margin-left: 30px;">
        <div>&nbsp;&nbsp;&nbsp; M(N) = max{<strong> M( n ) where n &lt; N</strong>, M(i)+len(N) IF start(N) MATCHES end(i) where i &lt; N}</div>
    </div>
    <div class="editor-indent" style="margin-left: 30px;">
        <div><strong>ELSE</strong></div>
    </div>
    <div class="editor-indent" style="margin-left: 30px;">
        <div>&nbsp;&nbsp;&nbsp; M(N) = max{ M(j) IF end(N) equals to end(j), M(i)+len(N) IF start(N)
            MATCHES end(i) }</div>
    </div>
    <div class="editor-indent" style="margin-left: 30px;">
        <div><strong>where</strong></div>
    </div>
    <div class="editor-indent" style="margin-left: 30px;">
        <div>&nbsp;&nbsp;&nbsp; i &lt;= N-1&nbsp; &amp;&amp;&nbsp; i &gt; t FOR ALL t start(N) matches end(t)</div>
    </div>
    <div class="editor-indent" style="margin-left: 30px;">
        <div>&nbsp;&nbsp;&nbsp; j &lt;= N-1&nbsp; &amp;&amp;&nbsp; j &gt; t FOR ALL t end(N) equals to end(t)</div>
    </div>
    <div class="editor-indent" style="margin-left: 30px;">
        <div>&nbsp; &nbsp;start( x ) MATCHES end( y ) IFF {{start( x ) =='I' &amp;&amp; end( y ) =='O} OR 
{start( x )=='O' &amp;&amp; end( y )=='I'} OR {start( x )=='S' &amp;&amp; end( y ) =='S'}}</div>
        <div>&nbsp; &nbsp;<em>size</em> is the length of the initial input array, not the length of the current partial array passed to the function.</div>
    </div><span style="font-size: 0.9375rem;"><strong>
            <div class="editor-indent" style="margin-left: 30px;"><span style="font-size: 0.9375rem;"><strong><br></strong></span></div>CAUTION:
        </strong> Please read this recurrence relation carefully. Put <em><strong>break</strong></em> statement(s) into the necessary places of your code to satisfy the above relation exactly. Also, use recurrence upto the last step which is the stopping case to end the recursion, that is: <em><strong>IF&nbsp; ... THEN return len[0]</strong></em>.</span><br>
</div>
<div><br></div>
<div>
    <div>The&nbsp;<em><strong>char**&amp; arr</strong></em>&nbsp;variable is the parameter which passes the input array of sticks to your functions.&nbsp;<strong>Do not modify that array! </strong>Note that it is a 2D array where each element of it is an another array of size 2 representing a stick with 2 ends. That is, each inner array is in the form of <strong>[&lt;left end type&gt;, &lt;right end type&gt;]</strong> where the &lt;left end type&gt; and &lt;right end type&gt; are char variables ('I', 'O', or 'S') representing the left and right ends of the stick, respectively.&nbsp;<br></div>
    <div><br></div>
    <div>The&nbsp;<em><strong>int*&amp; len</strong></em>&nbsp;variable is the parameter which passes the sizes of sticks defined in <em>arr </em>array<span> </span>to your functions.&nbsp;<strong>Do not modify that array too!</strong> The size of the i<sup>th</sup> stick in the <em>arr</em> array is specified in the i<sup>th</sup><em></em> element of len array. Size is an integer value between 1 and 10.<br></div>
    <div><br></div>
    <div>At&nbsp;<em>r<em>ecursive_sln()</em></em>&nbsp;and&nbsp;<em>memoization_sln()</em>,&nbsp;<em><strong>int i</strong></em>&nbsp;is intended to represent and pass indices of arr. While testing and grading, it will be initialized to&nbsp;<strong>sizeof(arr)-1</strong>&nbsp;(i.e. the last index of the array) . At&nbsp;<em>dp_sln()</em>, instead of such a variable, directly the&nbsp;<strong>size of the arr</strong>&nbsp;is given via<strong><em>&nbsp;</em></strong><strong><em>int size</em></strong>&nbsp;parameter.</div>
</div>
<div><br></div>
<div>For memoization and dynamic programming, you should use&nbsp;<em><strong>int**&amp; mem&nbsp;</strong></em><strong></strong>variable (i.e. array), which is the last parameter at definitions of those functions, as&nbsp;<strong>the array of memoized values</strong>. For both&nbsp;<em>memoization_sln()</em>&nbsp;and&nbsp;<em>dp_sln()</em>&nbsp;functions, final values in the&nbsp;<em>mem</em>&nbsp;variable will be considered for grading. Note that it is a 2D array. Each inner array is structered as an array of size 3 representing the stick combination ending with an Inwards end, Outwards end and Straight end, respectively.&nbsp;<span style="font-size: 0.9375rem;">While testing and grading, all the inner arrays of&nbsp;</span><em style="font-size: 0.9375rem;">mem</em><span style="font-size: 0.9375rem;">&nbsp;array will be initialized to all -1's. So, while implementing your functions,&nbsp;</span><strong style="font-size: 0.9375rem;">you can assume that&nbsp;<em>mem</em>&nbsp;is an array of array of -1's. Do not return that variable/array.</strong></div>
<div><strong style="font-size: 0.9375rem;"><br></strong></div>
<div><span style="font-size: 0.9375rem;">The difference between&nbsp;<em style="">memoization_sln()</em>&nbsp;and&nbsp;<em style="">dp_sln()</em>&nbsp;functions is that the first one consists of&nbsp; top-down approach (recursive) and the other one includes bottom-up (iterative) approach.</span></div>
<div><br>Implement the&nbsp; functions in most efficient way.</div><br><strong>Constraints:</strong><br>
<p></p>
<ul>
    <li>Maximum array size will be&nbsp;<strong>1000</strong>.&nbsp;</li>
</ul>
<p><strong>Evaluation:</strong></p>
<p></p>
<ul>
    <li>After your exam, black box evaluation will be carried out. You will get full points if&nbsp;</li>
</ul>
<ol>
    <li>your all three functions return the correct max length&nbsp;</li>
    <li>your recursive_sln() function makes the correct number of recursive calls</li>
    <li>and you fill the&nbsp;<em><strong>mem</strong></em>&nbsp;array correctly, as stated.</li>
    <li>you did not change the input arrays (the array of sticks and the length array).</li>
</ol>
<h5><u><strong>Specifications:</strong></u></h5>
<p dir="ltr"></p>
<ul>
    <li>There are&nbsp;<strong>3<strong>&nbsp;tasks</strong></strong>&nbsp;to be solved in&nbsp;<strong>12 hours</strong>&nbsp;in this take home exam.</li>
    <li>You will implement your solutions in&nbsp;<strong>the3.cpp</strong>&nbsp;file.</li>
    <li>Do&nbsp;<strong>not&nbsp;</strong>change the first line of&nbsp;<strong>the3.cpp</strong>, which is&nbsp;<strong>#include "the3.h"</strong></li>
    <li><em>&lt;iostream&gt;,&nbsp; &lt;climits&gt;</em>&nbsp;,&nbsp;<em>&lt;cmath&gt;</em>&nbsp;,&nbsp;<em>&lt;cstdlib&gt;&nbsp;&nbsp;</em>are included in "the3.h" for your convenience.</li>
    <li>Do&nbsp;<strong>not&nbsp;</strong>change the arguments and return&nbsp;<strong>types</strong>&nbsp;of the functions<strong>&nbsp;recursive_sln(), memoization_sln()&nbsp;</strong>and<strong>&nbsp;dp_sln()&nbsp;</strong>in the file&nbsp;<strong>the3.cpp.&nbsp;</strong>(You should change return&nbsp;<strong>values</strong>, on the other hand.)<strong><br></strong></li>
    <li>Do&nbsp;<strong>not&nbsp;</strong>include any other library or write include anywhere in your&nbsp;<strong>the3.cpp</strong>&nbsp;file (not even in comments).</li>
    <li>Do <strong>not</strong> write any helper method.</li>
</ul>
<h5><strong><u>Compilation:</u></strong></h5>
<p></p>
<ul>
    <li>You are given&nbsp;<strong>test.cpp</strong>&nbsp;file to&nbsp;<strong>test&nbsp;</strong>your work on&nbsp;<strong>ODTÜClass</strong>&nbsp;or your&nbsp;<strong>locale</strong>. You can and you are encouraged to modify this file to add different test cases.</li>
    <li>If you want to&nbsp;<strong>test&nbsp;</strong>your work and see your outputs you can&nbsp;<strong>compile and run&nbsp;</strong>your work on your locale as:</li>
</ul>
<table cellspacing="0" cellpadding="0" border="1">
    <tbody>
        <tr>
            <td width="604" valign="top">
                <p>&gt;g++ test.cpp the3.cpp -Wall -std=c++11 -o test</p>
                <p>&gt; ./test</p>
            </td>
        </tr>
    </tbody>
</table><br>
<ul>
    <li>You can test your&nbsp;<strong>the3.cpp</strong>&nbsp;on virtual lab environment. If you click&nbsp;<strong>run</strong>, your function will be compiled and executed with&nbsp;<strong>test.cpp</strong>. If you click&nbsp;<strong>evaluate</strong>, you will get a feedback for your current work and your work will be&nbsp;<strong>temporarily&nbsp;</strong>graded for&nbsp;<strong>limited&nbsp;</strong>number of inputs.</li>
    <li>The grade you see in lab is&nbsp;<strong>not</strong>&nbsp;your final grade, your code will be re-evaluated with&nbsp;<strong>completely</strong>&nbsp;<strong>different&nbsp;</strong>inputs after the exam.</li>
</ul>
<p>The system has the following limits:<br></p>
<ul>
    <li>a maximum execution time of 32 seconds</li>
    <li>a 192 MB maximum memory limit</li>
    <li>an execution file size of 1M.</li>
    <li>Solutions with longer running times will not be graded.</li>
    <li>If you are sure that your solution works in the expected complexity constrains but your evaluation fails due to limits in the lab environment, the constant factors may be the problem.<br><br></li>
</ul>
<table width="656" cellspacing="0" cellpadding="0" border="1">
    <tbody>
        <tr>
            <td width="656" valign="top">
                <p>int recursive_sln(int i, char**&amp; arr, int*&amp; len, int &amp;number_of_calls);<br>int memoization_sln(int i, char**&amp; arr, int*&amp; len, int**&amp; mem);<br>int dp_sln(int size, char**&amp; arr, int*&amp; len, int**&amp; mem);<br></p>
            </td>
        </tr>
    </tbody>
</table>
<div><br></div>
<div></div><br>
<p></p>
