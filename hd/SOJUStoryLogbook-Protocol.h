//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUPartialStoryLogbook.h"

@class NSArray, NSNumber, SOJUStory, SOJUStoryExtra;

@protocol SOJUStoryLogbook <NSObject, NSCoding, NSCopying, SOJUPartialStoryLogbook>
@property(readonly, copy, nonatomic) NSArray *otherStoryNotes;
@property(readonly, copy, nonatomic) NSArray *friendStoryNotes;
@property(readonly, copy, nonatomic) NSArray *storyNotes;
@property(readonly, copy, nonatomic) NSNumber *intendedPostTime;
@property(readonly, copy, nonatomic) NSNumber *engagementPercentage;
@property(readonly, copy, nonatomic) SOJUStoryExtra *otherStoryExtras;
@property(readonly, copy, nonatomic) SOJUStoryExtra *friendStoryExtras;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras;
@property(readonly, copy, nonatomic) SOJUStory *story;
@end

