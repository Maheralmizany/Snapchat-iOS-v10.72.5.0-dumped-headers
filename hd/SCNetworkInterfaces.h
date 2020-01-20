//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SCNetworkInterfaces : NSObject
{
    NSArray *_interfaces;
}

+ (id)currentWifiSsid;
+ (_Bool)isAWDLEnabled;
+ (id)interfacesThatMatch:(CDUnknownBlockType)arg1;
+ (_Bool)isWwanInterfaceIPv6Only;
+ (id)interfaceForAddress:(const struct sockaddr *)arg1;
+ (id)currentNetworkInterfaces;
@property(readonly, nonatomic) NSArray *interfaces; // @synthesize interfaces=_interfaces;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInterfaces:(id)arg1;

@end

