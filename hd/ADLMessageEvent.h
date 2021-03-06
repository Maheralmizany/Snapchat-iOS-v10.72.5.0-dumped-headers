//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface ADLMessageEvent : NSObject
{
    NSString *_scopeId;
    NSData *_data;
    long long _srcUserId;
}

+ (id)MessageEventWithScopeId:(id)arg1 data:(id)arg2 srcUserId:(long long)arg3;
@property(readonly, nonatomic) long long srcUserId; // @synthesize srcUserId=_srcUserId;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScopeId:(id)arg1 data:(id)arg2 srcUserId:(long long)arg3;

@end

