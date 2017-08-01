Pod::Spec.new do |s|
  s.name             = "YDGame"
  s.version          = "1.2"
  s.summary          = "优点游戏SDK，集成了优点登陆、付费、广告效果追踪等功能。"
  s.description      = <<-DESC
SDK提供了优点账号体系，支持注册、登陆、快速登陆等功能，付费集成了微信、支付宝、银联等主流的支付SDK，为开发者提供统一的支付接入体验。广告效果追踪可以自动跟踪设备的激活、账号的注册与登陆、玩家付费等基本数据。
                       DESC

  s.homepage         = "https://www.dataeye.com"
  s.license          = 'MIT'
  s.author           = { "xqwang" => "wxq491216@163.com" }
  s.source           = { :git => "https://github.com/DataEye/YDGame.git"}

  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.source_files = 'YDGame/*.h'
  s.vendored_libraries = 'YDGame/*.a'
  s.resources = 'YDGame/YDGameResource.bundle'

  s.libraries = "z"  

  s.dependency 'AFNetworking'
  s.dependency 'MBProgressHUD'
  s.dependency 'Masonry'
  s.dependency 'IQKeyboardManager'
  s.dependency 'WebViewJavascriptBridge'
  s.dependency 'SDWebImage'
end
