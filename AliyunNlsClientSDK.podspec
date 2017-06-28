Pod::Spec.new do |s|
  s.name             = 'AliyunNlsClientSDK'
  s.version          = '2.0.2'
  s.summary          = 'AliyunNlsClientSDK for SVW-SX.'
  s.description      = <<-DESC
                       AliyunNlsClientSDK for SVW-SX.
                        DESC

  s.homepage         = 'https://github.com/kwongfung/TalkingData.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Gavin Wang' => 'guangfeng@live.cn' }
  s.source           = { :git => 'https://github.com/kwongfung/TalkingData.git', :tag => s.version }
  s.ios.deployment_target = '8.0'

  s.source_files = 'AliyunNlsClientSDK/*.{h,m}'
  s.public_header_files = 'AliyunNlsClientSDK/TalkingData.h'
  s.vendored_libraries = 'AliyunNlsClientSDK/libTalkingData.a'
end