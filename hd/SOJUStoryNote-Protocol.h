//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUStoryPointer;

@protocol SOJUStoryNote <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *saved;
@property(readonly, copy, nonatomic) NSNumber *screenRecorded;
@property(readonly, copy, nonatomic) NSNumber *isFriendViewOfPublicStory;
@property(readonly, copy, nonatomic) SOJUStoryPointer *storypointer;
@property(readonly, copy, nonatomic) NSNumber *timestamp;
@property(readonly, copy, nonatomic) NSNumber *screenshotted;
@property(readonly, copy, nonatomic) NSString *viewer;
@end
