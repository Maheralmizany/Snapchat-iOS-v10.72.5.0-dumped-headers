//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SOJUAdDeviceDeviceInfo;

@interface SCUnlockableTrackDeviceInfo : NSObject
{
    SOJUAdDeviceDeviceInfo *_deviceInfo;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) SOJUAdDeviceDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
- (id)initWithDeviceInfo:(id)arg1;

@end
