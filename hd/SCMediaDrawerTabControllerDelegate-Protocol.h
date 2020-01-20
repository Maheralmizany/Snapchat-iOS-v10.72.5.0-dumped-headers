//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIScrollView;

@protocol SCMediaDrawerTabControllerDelegate <NSObject>
- (void)tabController:(id <SCMediaDrawerTabController>)arg1 didLongPressDrawerItem:(id <SCMediaDrawerItem>)arg2;
- (void)tabControllerDidLoad:(id <SCMediaDrawerTabController>)arg1;
- (_Bool)isDrawerFullyExpanded;
- (void)tabControllerDidEndDecelerating:(id <SCMediaDrawerTabController>)arg1;
- (void)tabController:(id <SCMediaDrawerTabController>)arg1 didEndDragging:(UIScrollView *)arg2 willDecelerate:(_Bool)arg3;
- (void)tabController:(id <SCMediaDrawerTabController>)arg1 didScroll:(UIScrollView *)arg2;
- (void)tabController:(id <SCMediaDrawerTabController>)arg1 willBeginDragging:(UIScrollView *)arg2;
- (void)tabController:(id <SCMediaDrawerTabController>)arg1 refreshWithDrawerItemList:(NSArray *)arg2;
- (void)tabControllerDidRequestExitSelectMode:(id <SCMediaDrawerTabController>)arg1;
- (void)tabController:(id <SCMediaDrawerTabController>)arg1 didDeselectDrawerItem:(id <SCMediaDrawerItem>)arg2;
- (void)tabController:(id <SCMediaDrawerTabController>)arg1 didSelectDrawerItem:(id <SCMediaDrawerItem>)arg2;
- (_Bool)tabController:(id <SCMediaDrawerTabController>)arg1 canSelectDrawerItem:(id <SCMediaDrawerItem>)arg2;
- (_Bool)isDrawerItemSelected:(id <SCMediaDrawerItem>)arg1;
- (_Bool)isInSelectionMode:(id <SCMediaDrawerTabController>)arg1;
@end
