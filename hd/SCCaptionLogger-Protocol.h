//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol SCCaptionLogger <NSObject>
- (void)logCaptionEditingActionFromLoggingParameters:(NSDictionary *)arg1;
- (void)logUserTaggingFromSticker;
- (void)logUserTaggingFromButtonTap;
- (void)logUserTaggingFromTextInput;
- (void)logCaptionCarouselUserTaggingItemTapped;
- (void)logCaptionCarouselStyleItemTapped:(NSString *)arg1;
- (void)logCaptionRemoved;
- (void)logCaptionAdded;
@end

