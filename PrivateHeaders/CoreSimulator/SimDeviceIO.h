//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSimulator/SimDeviceIOInterface-Protocol.h>

@class SimDevice;

@interface SimDeviceIO : NSObject <SimDeviceIOInterface>
{
    SimDevice *_device;
}

+ (id)ioForSimDevice:(id)arg1;
@property (nonatomic, assign) __weak SimDevice *device;
- (void).cxx_destruct;
- (void)detachConsumer:(id)arg1 fromPort:(id)arg2;
- (void)attachConsumer:(id)arg1 toPort:(id)arg2;
- (BOOL)unregisterService:(id)arg1 error:(id *)arg2;
- (BOOL)registerPort:(unsigned int)arg1 service:(id)arg2 error:(id *)arg3;
- (NSDictionary *)makeRequest:(id)arg1 fields:(NSDictionary *)arg2;
- (id)ioPortForUUID:(id)arg1;
- (id)ioPorts;
- (id)initWithDevice:(id)arg1;

@end