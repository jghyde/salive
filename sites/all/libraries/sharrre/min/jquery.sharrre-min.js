!function($,t,o,n){function i(t,e){this.element=t,this.options=$.extend(!0,{},a,e),this.options.share=e.share,this._defaults=a,this._name=r,this.init()}var r="sharrre",a={className:"sharrre",share:{googlePlus:!1,facebook:!1,twitter:!1,digg:!1,delicious:!1,stumbleupon:!1,linkedin:!1,pinterest:!1},shareTotal:0,template:"",title:"",url:o.location.href,text:o.title,urlCurl:"sharrre.php",count:{},total:0,shorterTotal:!0,enableHover:!0,enableCounter:!0,enableTracking:!1,hover:function(){},hide:function(){},click:function(){},render:function(){},buttons:{googlePlus:{url:"",urlCount:!1,size:"medium",lang:"en-US",annotation:""},facebook:{url:"",urlCount:!1,action:"like",layout:"button_count",width:"",send:"false",faces:"false",colorscheme:"",font:"",lang:"en_US"},twitter:{url:"",urlCount:!1,count:"horizontal",hashtags:"",via:"",related:"",lang:"en"},digg:{url:"",urlCount:!1,type:"DiggCompact"},delicious:{url:"",urlCount:!1,size:"medium"},stumbleupon:{url:"",urlCount:!1,layout:"1"},linkedin:{url:"",urlCount:!1,counter:""},pinterest:{url:"",media:"",description:"",layout:"horizontal"}}},l={googlePlus:"",facebook:"https://graph.facebook.com/fql?q=SELECT%20url,%20normalized_url,%20share_count,%20like_count,%20comment_count,%20total_count,commentsbox_count,%20comments_fbid,%20click_count%20FROM%20link_stat%20WHERE%20url=%27{url}%27&callback=?",twitter:"http://cdn.api.twitter.com/1/urls/count.json?url={url}&callback=?",digg:"http://services.digg.com/2.0/story.getInfo?links={url}&type=javascript&callback=?",delicious:"http://feeds.delicious.com/v2/json/urlinfo/data?url={url}&callback=?",stumbleupon:"",linkedin:"http://www.linkedin.com/countserv/count/share?format=jsonp&url={url}&callback=?",pinterest:"http://api.pinterest.com/v1/urls/count.json?url={url}&callback=?"},u={googlePlus:function(e){var n=e.options.buttons.googlePlus;$(e.element).find(".buttons").append('<div class="button googleplus"><div class="g-plusone" data-size="'+n.size+'" data-href="'+(""!==n.url?n.url:e.options.url)+'" data-annotation="'+n.annotation+'"></div></div>'),t.___gcfg={lang:e.options.buttons.googlePlus.lang};var i=0;"undefined"==typeof gapi&&0==i?(i=1,function(){var t=o.createElement("script");t.type="text/javascript",t.async=!0,t.src="//apis.google.com/js/plusone.js";var e=o.getElementsByTagName("script")[0];e.parentNode.insertBefore(t,e)}()):gapi.plusone.go()},facebook:function(t){var e=t.options.buttons.facebook;$(t.element).find(".buttons").append('<div class="button facebook"><div id="fb-root"></div><div class="fb-like" data-href="'+(""!==e.url?e.url:t.options.url)+'" data-send="'+e.send+'" data-layout="'+e.layout+'" data-width="'+e.width+'" data-show-faces="'+e.faces+'" data-action="'+e.action+'" data-colorscheme="'+e.colorscheme+'" data-font="'+e.font+'" data-via="'+e.via+'"></div></div>');var n=0;"undefined"==typeof FB&&0==n?(n=1,function(t,o,n){var i,s=t.getElementsByTagName(o)[0];t.getElementById(n)||(i=t.createElement(o),i.id=n,i.src="//connect.facebook.net/"+e.lang+"/all.js#xfbml=1",s.parentNode.insertBefore(i,s))}(o,"script","facebook-jssdk")):FB.XFBML.parse()},twitter:function(t){var e=t.options.buttons.twitter;$(t.element).find(".buttons").append('<div class="button twitter"><a href="https://twitter.com/share" class="twitter-share-button" data-url="'+(""!==e.url?e.url:t.options.url)+'" data-count="'+e.count+'" data-text="'+t.options.text+'" data-via="'+e.via+'" data-hashtags="'+e.hashtags+'" data-related="'+e.related+'" data-lang="'+e.lang+'">Tweet</a></div>');var n=0;"undefined"==typeof twttr&&0==n?(n=1,function(){var t=o.createElement("script");t.type="text/javascript",t.async=!0,t.src="//platform.twitter.com/widgets.js";var e=o.getElementsByTagName("script")[0];e.parentNode.insertBefore(t,e)}()):$.ajax({url:"//platform.twitter.com/widgets.js",dataType:"script",cache:!0})},digg:function(t){var e=t.options.buttons.digg;$(t.element).find(".buttons").append('<div class="button digg"><a class="DiggThisButton '+e.type+'" rel="nofollow external" href="http://digg.com/submit?url='+encodeURIComponent(""!==e.url?e.url:t.options.url)+'"></a></div>');var n=0;"undefined"==typeof __DBW&&0==n&&(n=1,function(){var t=o.createElement("SCRIPT"),e=o.getElementsByTagName("SCRIPT")[0];t.type="text/javascript",t.async=!0,t.src="//widgets.digg.com/buttons.js",e.parentNode.insertBefore(t,e)}())},delicious:function(t){if("tall"==t.options.buttons.delicious.size)var e="width:50px;",o="height:35px;width:50px;font-size:15px;line-height:35px;",n="height:18px;line-height:18px;margin-top:3px;";else var e="width:93px;",o="float:right;padding:0 3px;height:20px;width:26px;line-height:20px;",n="float:left;height:20px;line-height:20px;";var i=t.shorterTotal(t.options.count.delicious);"undefined"==typeof i&&(i=0),$(t.element).find(".buttons").append('<div class="button delicious"><div style="'+e+'font:12px Arial,Helvetica,sans-serif;cursor:pointer;color:#666666;display:inline-block;float:none;height:20px;line-height:normal;margin:0;padding:0;text-indent:0;vertical-align:baseline;"><div style="'+o+'background-color:#fff;margin-bottom:5px;overflow:hidden;text-align:center;border:1px solid #ccc;border-radius:3px;">'+i+'</div><div style="'+n+'display:block;padding:0;text-align:center;text-decoration:none;width:50px;background-color:#7EACEE;border:1px solid #40679C;border-radius:3px;color:#fff;"><img src="http://www.delicious.com/static/img/delicious.small.gif" height="10" width="10" alt="Delicious" /> Add</div></div></div>'),$(t.element).find(".delicious").on("click",function(){t.openPopup("delicious")})},stumbleupon:function(e){var n=e.options.buttons.stumbleupon;$(e.element).find(".buttons").append('<div class="button stumbleupon"><su:badge layout="'+n.layout+'" location="'+(""!==n.url?n.url:e.options.url)+'"></su:badge></div>');var i=0;"undefined"==typeof STMBLPN&&0==i?(i=1,function(){var t=o.createElement("script");t.type="text/javascript",t.async=!0,t.src="//platform.stumbleupon.com/1/widgets.js";var e=o.getElementsByTagName("script")[0];e.parentNode.insertBefore(t,e)}(),s=t.setTimeout(function(){"undefined"!=typeof STMBLPN&&(STMBLPN.processWidgets(),clearInterval(s))},500)):STMBLPN.processWidgets()},linkedin:function(e){var n=e.options.buttons.linkedin;$(e.element).find(".buttons").append('<div class="button linkedin"><script type="in/share" data-url="'+(""!==n.url?n.url:e.options.url)+'" data-counter="'+n.counter+'"></script></div>');var i=0;"undefined"==typeof t.IN&&0==i?(i=1,function(){var t=o.createElement("script");t.type="text/javascript",t.async=!0,t.src="//platform.linkedin.com/in.js";var e=o.getElementsByTagName("script")[0];e.parentNode.insertBefore(t,e)}()):t.IN.init()},pinterest:function(t){var e=t.options.buttons.pinterest;$(t.element).find(".buttons").append('<div class="button pinterest"><a href="http://pinterest.com/pin/create/button/?url='+(""!==e.url?e.url:t.options.url)+"&media="+e.media+"&description="+e.description+'" class="pin-it-button" count-layout="'+e.layout+'">Pin It</a></div>'),function(){var t=o.createElement("script");t.type="text/javascript",t.async=!0,t.src="//assets.pinterest.com/js/pinit.js";var e=o.getElementsByTagName("script")[0];e.parentNode.insertBefore(t,e)}()}},c={googlePlus:function(){},facebook:function(){fb=t.setInterval(function(){"undefined"!=typeof FB&&(FB.Event.subscribe("edge.create",function(t){_gaq.push(["_trackSocial","facebook","like",t])}),FB.Event.subscribe("edge.remove",function(t){_gaq.push(["_trackSocial","facebook","unlike",t])}),FB.Event.subscribe("message.send",function(t){_gaq.push(["_trackSocial","facebook","send",t])}),clearInterval(fb))},1e3)},twitter:function(){tw=t.setInterval(function(){"undefined"!=typeof twttr&&(twttr.events.bind("tweet",function(t){t&&_gaq.push(["_trackSocial","twitter","tweet"])}),clearInterval(tw))},1e3)},digg:function(){},delicious:function(){},stumbleupon:function(){},linkedin:function(){function t(){_gaq.push(["_trackSocial","linkedin","share"])}},pinterest:function(){}},p={googlePlus:function(e){t.open("https://plus.google.com/share?hl="+e.buttons.googlePlus.lang+"&url="+encodeURIComponent(""!==e.buttons.googlePlus.url?e.buttons.googlePlus.url:e.url),"","toolbar=0, status=0, width=900, height=500")},facebook:function(e){t.open("http://www.facebook.com/sharer/sharer.php?u="+encodeURIComponent(""!==e.buttons.facebook.url?e.buttons.facebook.url:e.url)+"&t="+e.text,"","toolbar=0, status=0, width=900, height=500")},twitter:function(e){t.open("https://twitter.com/intent/tweet?text="+encodeURIComponent(e.text)+"&url="+encodeURIComponent(""!==e.buttons.twitter.url?e.buttons.twitter.url:e.url)+(""!==e.buttons.twitter.via?"&via="+e.buttons.twitter.via:""),"","toolbar=0, status=0, width=650, height=360")},digg:function(e){t.open("http://digg.com/tools/diggthis/submit?url="+encodeURIComponent(""!==e.buttons.digg.url?e.buttons.digg.url:e.url)+"&title="+e.text+"&related=true&style=true","","toolbar=0, status=0, width=650, height=360")},delicious:function(e){t.open("http://www.delicious.com/save?v=5&noui&jump=close&url="+encodeURIComponent(""!==e.buttons.delicious.url?e.buttons.delicious.url:e.url)+"&title="+e.text,"delicious","toolbar=no,width=550,height=550")},stumbleupon:function(e){t.open("http://www.stumbleupon.com/badge/?url="+encodeURIComponent(""!==e.buttons.stumbleupon.url?e.buttons.stumbleupon.url:e.url),"stumbleupon","toolbar=no,width=550,height=550")},linkedin:function(e){t.open("https://www.linkedin.com/cws/share?url="+encodeURIComponent(""!==e.buttons.linkedin.url?e.buttons.linkedin.url:e.url)+"&token=&isFramed=true","linkedin","toolbar=no,width=550,height=550")},pinterest:function(e){t.open("http://pinterest.com/pin/create/button/?url="+encodeURIComponent(""!==e.buttons.pinterest.url?e.buttons.pinterest.url:e.url)+"&media="+encodeURIComponent(e.buttons.pinterest.media)+"&description="+e.buttons.pinterest.description,"pinterest","toolbar=no,width=700,height=300")}};i.prototype.init=function(){var t=this;""!==this.options.urlCurl&&(l.googlePlus=this.options.urlCurl+"?url={url}&type=googlePlus",l.stumbleupon=this.options.urlCurl+"?url={url}&type=stumbleupon"),$(this.element).addClass(this.options.className),"undefined"!=typeof $(this.element).data("title")&&(this.options.title=$(this.element).attr("data-title")),"undefined"!=typeof $(this.element).data("url")&&(this.options.url=$(this.element).data("url")),"undefined"!=typeof $(this.element).data("text")&&(this.options.text=$(this.element).data("text")),$.each(this.options.share,function(e,o){o===!0&&t.options.shareTotal++}),t.options.enableCounter===!0?$.each(this.options.share,function(e,o){if(o===!0)try{t.getSocialJson(e)}catch(n){}}):""!==t.options.template?this.options.render(this,this.options):this.loadButtons(),$(this.element).hover(function(){0===$(this).find(".buttons").length&&t.options.enableHover===!0&&t.loadButtons(),t.options.hover(t,t.options)},function(){t.options.hide(t,t.options)}),$(this.element).click(function(){return t.options.click(t,t.options),!1})},i.prototype.loadButtons=function(){var t=this;$(this.element).append('<div class="buttons"></div>'),$.each(t.options.share,function(e,o){1==o&&(u[e](t),t.options.enableTracking===!0&&c[e]())})},i.prototype.getSocialJson=function(t){var e=this,o=0,n=l[t].replace("{url}",encodeURIComponent(this.options.url));this.options.buttons[t].urlCount===!0&&""!==this.options.buttons[t].url&&(n=l[t].replace("{url}",this.options.buttons[t].url)),""!=n&&""!==e.options.urlCurl?$.getJSON(n,function(n){if("undefined"!=typeof n.count){var i=n.count+"";i=i.replace("Â ",""),o+=parseInt(i,10)}else n.data&&n.data.length>0&&"undefined"!=typeof n.data[0].total_count?o+=parseInt(n.data[0].total_count,10):"undefined"!=typeof n[0]?o+=parseInt(n[0].total_posts,10):"undefined"!=typeof n[0];e.options.count[t]=o,e.options.total+=o,e.renderer(),e.rendererPerso()}).error(function(){e.options.count[t]=0,e.rendererPerso()}):(e.renderer(),e.options.count[t]=0,e.rendererPerso())},i.prototype.rendererPerso=function(){var t=0;for(e in this.options.count)t++;t===this.options.shareTotal&&this.options.render(this,this.options)},i.prototype.renderer=function(){var t=this.options.total,e=this.options.template;this.options.shorterTotal===!0&&(t=this.shorterTotal(t)),""!==e?(e=e.replace("{total}",t),$(this.element).html(e)):$(this.element).html('<div class="box"><span class="count">'+t+"</span></div>")},i.prototype.shorterTotal=function(t){return t>=1e6?t=(t/1e6).toFixed(2)+"M":t>=1e3&&(t=(t/1e3).toFixed(1)+"k"),t},i.prototype.simulateClick=function(){var t=$(this.element).html();$(this.element).html(t.replace(this.options.total,this.options.total+1))},i.prototype.update=function(t,e){""!==t&&(this.options.url=t),""!==e&&(this.options.text=e)},$.fn[r]=function(t){var e=arguments;return t===n||"object"==typeof t?this.each(function(){$.data(this,"plugin_"+r)||$.data(this,"plugin_"+r,new i(this,t))}):"string"==typeof t&&"_"!==t[0]&&"init"!==t?this.each(function(){var o=$.data(this,"plugin_"+r);o instanceof i&&"function"==typeof o[t]&&o[t].apply(o,Array.prototype.slice.call(e,1))}):void 0}}(jQuery,window,document);