//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol SCSearchV2UISubscreenOwner <NSObject>
- (id <SCSearchV2UIScrollableView>)getSearchSubscreenScrollView;
- (UIView *)getSearchSubscreenSearchBoxView;
- (void)onSearchSubscreenReadyWithCompletion:(void (^)(UIView *))arg1;
@end

