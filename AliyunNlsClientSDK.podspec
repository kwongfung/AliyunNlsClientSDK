Pod::Spec.new do |s|
  s.name             = 'AliyunNlsClientSDK'
  s.version          = '2.0.2'
  s.summary          = 'AliyunNlsClientSDK for SVW-SX.'
  s.description      = <<-DESC
                       AliyunNlsClientSDK for SVW-SX.
                        DESC

  s.homepage         = 'https://github.com/kwongfung/AliyunNlsClientSDK.git'
  #s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Gavin Wang' => 'guangfeng@live.cn' }
  s.source           = { :git => 'https://github.com/kwongfung/AliyunNlsClientSDK.git', :tag => s.version }
  s.ios.deployment_target = '8.0'

  s.source_files = 'AliyunNlsClientSDK/*.{h,m}'
  s.public_header_files = 'AliyunNlsClientSDK/AliyunNlsClientSDK.h'
  s.vendored_frameworks = 'AliyunNlsClientSDK/NlsClientSDK.framework'
  s.ios.frameworks   = 'CoreGraphics', 'Security', 'Foundation', 'UIKit', 'CFNetwork', 'AVFoundation', 'AudioToolbox', 'SystemConfiguration', 'QuartzCore'
  s.ios.libraries = 'icucore'
  s.pod_target_xcconfig = { "OTHER_LDFLAGS" => '-ObjC'}
end
