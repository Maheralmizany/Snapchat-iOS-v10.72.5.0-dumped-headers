//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SCReportStoryMetadataParams : NSObject
{
    _Bool _isCheetahStory;
    NSString *_storySnapId;
    NSString *_posterUsername;
    NSDictionary *_additionalParams;
    long long _reportType;
}

@property(readonly, nonatomic) _Bool isCheetahStory; // @synthesize isCheetahStory=_isCheetahStory;
@property(readonly, nonatomic) long long reportType; // @synthesize reportType=_reportType;
@property(readonly, nonatomic) NSDictionary *additionalParams; // @synthesize additionalParams=_additionalParams;
@property(readonly, nonatomic) NSString *posterUsername; // @synthesize posterUsername=_posterUsername;
@property(readonly, nonatomic) NSString *storySnapId; // @synthesize storySnapId=_storySnapId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStorySnapId:(id)arg1 posterUsername:(id)arg2 additionalParams:(id)arg3 reportType:(long long)arg4 isCheetahStory:(_Bool)arg5;

@end
