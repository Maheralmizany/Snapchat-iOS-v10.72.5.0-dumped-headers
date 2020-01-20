//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface SCLagunaTransferEventAnalyticsInfo : NSObject <NSCoding>
{
    unsigned long long _type;
    long long _channel;
    NSString *_sessionId;
    NSString *_deviceId;
    NSString *_firmwareVersion;
    NSString *_hardwareVersion;
    long long _deviceColor;
}

@property(readonly, nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(readonly, copy, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(readonly, copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) long long channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferSession:(id)arg1;

@end

