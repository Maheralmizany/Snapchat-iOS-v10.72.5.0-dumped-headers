//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCHovaSearchView, UIColor, UIFont;

@protocol SCHovaSearchViewDataSource <NSObject>
- (_Bool)searchView:(SCHovaSearchView *)arg1 shouldDimPlaceholderForIndex:(long long)arg2;
- (UIFont *)searchView:(SCHovaSearchView *)arg1 placeholderTitleFontForIndex:(long long)arg2;
- (UIColor *)searchView:(SCHovaSearchView *)arg1 placeholderTitleColorForIndex:(long long)arg2;
- (NSString *)searchView:(SCHovaSearchView *)arg1 placeholderForIndex:(long long)arg2;
@end

