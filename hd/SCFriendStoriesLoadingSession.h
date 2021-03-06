//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSNumber, NSString;

@interface SCFriendStoriesLoadingSession : NSObject
{
    _Bool _userInitiated;
    long long _loadContext;
    NSMutableSet *_loadingStoryIds;
    NSString *_username;
    long long _viewSource;
    NSNumber *_startTime;
}

@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(copy, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long viewSource; // @synthesize viewSource=_viewSource;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSMutableSet *loadingStoryIds; // @synthesize loadingStoryIds=_loadingStoryIds;
@property(nonatomic) long long loadContext; // @synthesize loadContext=_loadContext;
- (void).cxx_destruct;
- (id)init;

@end

