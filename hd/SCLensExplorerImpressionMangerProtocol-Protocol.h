//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, SCLensExplorerImpressionViewItem;

@protocol SCLensExplorerImpressionMangerProtocol <NSObject>
- (void)reset;
- (void)trackTapOnViewItem:(SCLensExplorerImpressionViewItem *)arg1;
- (void)trackViewItems:(NSArray *)arg1 date:(NSDate *)arg2 viewPort:(struct CGRect)arg3;
@end

