Pod::Spec.new do |s|
  s.name     = 'XQBadgedBarButtonItem'
  s.version  = '1.0.8'
  s.license  = 'MIT'
  s.summary  = 'XQBadgedBarButtonItem is a UIBarButtonItem subclass that supports badging.'

  s.homepage = 'https://github.com/rycardo/XQBadgedBarButtonItem'
  s.authors   = { 'Mark H. Granoff' => 'mark@granoff.net', '4XQ LLC' => 'ios.support@4xq.ca' }

  s.source   = { :git => 'https://github.com/rycardo/XQBadgedBarButtonItem.git', :tag => '1.0.8' }

  s.platform = :ios
  s.source_files = 'XQBadgedBarButtonItem.{h,m}'
  s.requires_arc = true
end
