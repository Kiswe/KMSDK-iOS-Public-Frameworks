#
# Be sure to run `pod lib lint KMSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'KMSDK'
  s.version          = '2.5.1'
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
  s.author           = { 'Chris Boraski' => 'chris.boraski@kiswe.com' }
  s.source           = { :git => 'https://github.com/Kiswe/KMSDK-iOS-Public-Frameworks.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'
  s.swift_version = '4.2'

  s.dependency 'WebViewJavascriptBridge', '~> 6.0.2'
  s.dependency 'AFNetworking', '~> 3.2.1'
  s.dependency 'SlackTextViewController', '1.9.6'
  s.frameworks = 'UIKit', 'AVFoundation', 'WebKit'
  s.vendored_frameworks = 'KMSDK.framework', 'RTArchiver.framework', 'KiswePlaybackControls.framework'
end
