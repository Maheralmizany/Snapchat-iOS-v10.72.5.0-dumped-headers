//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSearchDynamicStory;

@interface SCSearchStoryMetadataBuilder : NSObject
{
    long long _viewableStatus;
    NSString *_displayText;
    NSString *_snapId;
    SCSearchDynamicStory *_dynamicStory;
}

+ (id)withSearchStoryMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)setDynamicStory:(id)arg1;
- (id)setSnapId:(id)arg1;
- (id)setDisplayText:(id)arg1;
- (id)setViewableStatus:(long long)arg1;
- (id)build;

@end
