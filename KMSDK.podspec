#
# Be sure to run `pod lib lint KMSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'KMSDK'
  s.version          = '0.1.0'
  s.summary          = 'Kiswe iOS SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Kiswe iOS SDK
                       DESC

  s.homepage         = 'http://developer.kiswe.com/'
  s.license          = 'Private'
  s.author           = { 'Rodrigo Pacheco Curro' => 'rodrigo.pachecocurro@kiswe.com' }
  s.source           = { :git => 'https://bitbucket.org/kiswe/kmsdk-ios-public.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.3'

  s.dependency 'WebViewJavascriptBridge', '~> 6.0.2'
  s.dependency 'CocoaLumberjack', '~> 3.1.0'
  s.dependency 'CocoaLumberjack/Swift', '~> 3.1.0'
  s.dependency 'AFNetworking', '~> 3.1.0'
  s.vendored_frameworks = 'KMSDK.framework', 'RTArchiver.framework', 'KiswePlaybackControls.framework'
end
