//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SCNetworkActivityStatusChangeItem : NSObject
{
    NSDate *_timestamp;
    unsigned long long _type;
    NSString *_networkActivityIdentifier;
    NSString *_networkActivityAttributionKey;
    long long _connectivityStatus;
}

@property(nonatomic) long long connectivityStatus; // @synthesize connectivityStatus=_connectivityStatus;
@property(copy, nonatomic) NSString *networkActivityAttributionKey; // @synthesize networkActivityAttributionKey=_networkActivityAttributionKey;
@property(copy, nonatomic) NSString *networkActivityIdentifier; // @synthesize networkActivityIdentifier=_networkActivityIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)arg1 type:(unsigned long long)arg2 networkActivityIdentifier:(id)arg3 networkActivityAttributionKey:(id)arg4 connectivityStatus:(long long)arg5;

@end

