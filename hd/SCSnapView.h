//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString, SCCompositeStoryId;

@interface SCSnapView : SCDocObject <NSCopying>
{
    NSString *_snapId;
    NSString *_context;
    unsigned long long _expirationTimestamp;
    unsigned long long _viewTimestamp;
    SCCompositeStoryId *_compositeStoryId;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) SCCompositeStoryId *compositeStoryId; // @synthesize compositeStoryId=_compositeStoryId;
@property(readonly, nonatomic) unsigned long long viewTimestamp; // @synthesize viewTimestamp=_viewTimestamp;
@property(readonly, nonatomic) unsigned long long expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 context:(id)arg2 expirationTimestamp:(unsigned long long)arg3 viewTimestamp:(unsigned long long)arg4 compositeStoryId:(id)arg5;

@end
