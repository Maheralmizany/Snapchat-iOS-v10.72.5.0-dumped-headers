//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCStoriesOurStoryDescription : SCDocObject <NSCopying>
{
    NSString *_storyGroupId;
    NSString *_ourStoryDescription;
    NSString *_autoAddedFriendDescription;
    NSString *_friendDescription;
    NSString *_sharedPostAlertTitle;
    NSString *_sharedPostAlertBody;
    NSString *_viewJITAlertTitle;
    NSString *_viewJITAlertBody;
    NSString *_sharedAttributionBody;
    double _lastRetrievedTimestamp;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, nonatomic) double lastRetrievedTimestamp; // @synthesize lastRetrievedTimestamp=_lastRetrievedTimestamp;
@property(readonly, copy, nonatomic) NSString *sharedAttributionBody; // @synthesize sharedAttributionBody=_sharedAttributionBody;
@property(readonly, copy, nonatomic) NSString *viewJITAlertBody; // @synthesize viewJITAlertBody=_viewJITAlertBody;
@property(readonly, copy, nonatomic) NSString *viewJITAlertTitle; // @synthesize viewJITAlertTitle=_viewJITAlertTitle;
@property(readonly, copy, nonatomic) NSString *sharedPostAlertBody; // @synthesize sharedPostAlertBody=_sharedPostAlertBody;
@property(readonly, copy, nonatomic) NSString *sharedPostAlertTitle; // @synthesize sharedPostAlertTitle=_sharedPostAlertTitle;
@property(readonly, copy, nonatomic) NSString *friendDescription; // @synthesize friendDescription=_friendDescription;
@property(readonly, copy, nonatomic) NSString *autoAddedFriendDescription; // @synthesize autoAddedFriendDescription=_autoAddedFriendDescription;
@property(readonly, copy, nonatomic) NSString *ourStoryDescription; // @synthesize ourStoryDescription=_ourStoryDescription;
@property(readonly, copy, nonatomic) NSString *storyGroupId; // @synthesize storyGroupId=_storyGroupId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryGroupId:(id)arg1 ourStoryDescription:(id)arg2 autoAddedFriendDescription:(id)arg3 friendDescription:(id)arg4 sharedPostAlertTitle:(id)arg5 sharedPostAlertBody:(id)arg6 viewJITAlertTitle:(id)arg7 viewJITAlertBody:(id)arg8 sharedAttributionBody:(id)arg9 lastRetrievedTimestamp:(double)arg10;

@end

