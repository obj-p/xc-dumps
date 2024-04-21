@import Foundation;

@class SimProfileBundle;

@protocol SimDeviceTypeProtocol

@property (retain, nonatomic, nullable) SimProfileBundle *bundle;
@property (copy, nonatomic, nullable) NSString *modelIdentifier;

- (nullable instancetype)initWithBundle:(nonnull NSBundle *)bundle error:(NSError * _Nullable * _Nullable)error;

@end
