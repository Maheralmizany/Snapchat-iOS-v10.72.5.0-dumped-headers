//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCSpectaclesHomeWifiAP : NSObject
{
    unsigned long long _state;
    NSString *_ssid;
}

+ (id)homeWifiAPStateToString:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(unsigned long long)arg1 ssid:(id)arg2;

@end

