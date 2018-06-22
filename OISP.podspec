Pod::Spec.new do |s|
  s.name = "OISP"
  s.version = "0.0.1"
  s.summary = "OISP summary"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"Sam Wang"=>"samwang@smart-ehome.com"}
  s.homepage = "https://github.com/TW-WANG/OISP-Package"
  s.description = "Open Intelligent System Platform Lib"
  s.requires_arc = true
  s.source = { :git => "https://github.com/TW-WANG/OISP-Package.git", :tag => s.version }
  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/OISP.framework'
end
