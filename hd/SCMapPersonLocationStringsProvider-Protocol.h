//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCMapPersonLocationStringsListenerAnnouncer;

@protocol SCMapPersonLocationStringsProvider <NSObject>
- (NSString *)bitmojiLabelLastSeenFromPersonLocations:(NSArray *)arg1;
- (NSString *)bitmojiLabelNameFromPersonLocations:(NSArray *)arg1;
- (NSString *)calloutBodyFromPersonLocations:(NSArray *)arg1;
- (NSString *)calloutSubtitleFromPersonLocations:(NSArray *)arg1 currentUserSharingLocation:(_Bool)arg2;
- (NSString *)calloutTitleFromPersonLocations:(NSArray *)arg1;
- (SCMapPersonLocationStringsListenerAnnouncer *)announcer;
@end

