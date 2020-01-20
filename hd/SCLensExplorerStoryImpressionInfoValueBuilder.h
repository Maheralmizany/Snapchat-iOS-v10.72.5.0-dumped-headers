//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface SCLensExplorerStoryImpressionInfoValueBuilder : NSObject
{
    unsigned int _itemPosition;
    NSDate *_viewSessionStartTime;
    double _mediaViewTime;
    NSString *_subitemId;
    NSString *_pageId;
    unsigned long long _numberOfSnapsViewed;
    long long _maxSubitemViewIndex;
    NSString *_maxSubitemIdView;
    NSDictionary *_fieldsOverrideDict;
    NSString *_section;
    _Bool _isFullyViewed;
    NSString *_triggeringItemId;
    long long _triggeringItemPlaylistOffset;
}

+ (id)lensExplorerStoryImpressionInfoValueFromExistingLensExplorerStoryImpressionInfoValue:(id)arg1;
+ (id)lensExplorerStoryImpressionInfoValue;
- (void).cxx_destruct;
- (id)withTriggeringItemPlaylistOffset:(long long)arg1;
- (id)withTriggeringItemId:(id)arg1;
- (id)withIsFullyViewed:(_Bool)arg1;
- (id)withSection:(id)arg1;
- (id)withFieldsOverrideDict:(id)arg1;
- (id)withMaxSubitemIdView:(id)arg1;
- (id)withMaxSubitemViewIndex:(long long)arg1;
- (id)withNumberOfSnapsViewed:(unsigned long long)arg1;
- (id)withPageId:(id)arg1;
- (id)withSubitemId:(id)arg1;
- (id)withMediaViewTime:(double)arg1;
- (id)withViewSessionStartTime:(id)arg1;
- (id)withItemPosition:(unsigned int)arg1;
- (id)build;

@end
