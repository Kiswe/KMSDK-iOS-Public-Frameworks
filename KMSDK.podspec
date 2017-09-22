#
# Be sure to run `pod lib lint KMSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'KMSDK'
  s.version          = '2.2.3'
  s.summary          = 'Kiswe iOS SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Kiswe iOS SDK Framework
                       DESC

  s.homepage         = 'http://developer.kiswe.com/'
  s.license          = 'Private'
  s.author           = { 'Rodrigo Pacheco Curro' => 'rodrigo.pachecocurro@kiswe.com' }
  s.source           = { :git => 'https://github.com/Kiswe/KMSDK-iOS-Public-Frameworks.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'

  s.dependency 'WebViewJavascriptBridge', '~> 6.0.2'
  s.dependency 'CocoaLumberjack', '~> 3.2.1'
  s.dependency 'CocoaLumberjack/Swift', '~> 3.2.1'
  s.dependency 'AFNetworking', '~> 3.1.0'
  s.dependency 'SlackTextViewController', '~> 1.9.5'
  s.frameworks = 'UIKit', 'AVFoundation', 'WebKit'
  s.vendored_frameworks = 'KMSDK.framework', 'RTArchiver.framework', 'KiswePlaybackControls.framework'
end
