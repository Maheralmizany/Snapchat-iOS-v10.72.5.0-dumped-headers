//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface SCAnnouncerEvent : NSObject <NSCopying>
{
    NSString *_eventName;
    NSString *_announcerIdentifier;
    NSDictionary *_extraData;
}

@property(readonly, copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(readonly, copy, nonatomic) NSString *announcerIdentifier; // @synthesize announcerIdentifier=_announcerIdentifier;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;

@end

