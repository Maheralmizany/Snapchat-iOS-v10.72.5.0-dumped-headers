//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString, SOJUStory;

@protocol SOJUMessagingNycStoryShareMetadataResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *zoom;
@property(readonly, copy, nonatomic) NSNumber *lng;
@property(readonly, copy, nonatomic) NSNumber *lat;
@property(readonly, copy, nonatomic) NSString *displayText;
@property(readonly, copy, nonatomic) NSString *status;
@property(readonly, copy, nonatomic) SOJUStory *story;
@end
