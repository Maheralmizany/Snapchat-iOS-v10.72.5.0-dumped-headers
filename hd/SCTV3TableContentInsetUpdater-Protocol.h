//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTV3TableContentInsetUpdateMode, UIView;

@protocol SCTV3TableContentInsetUpdater <NSObject>
- (void)setUpdateMode:(SCTV3TableContentInsetUpdateMode *)arg1;
- (void)updateTableContentInset;
- (void)removeViewAlteringInset:(UIView *)arg1;
- (void)addViewAlteringInset:(UIView *)arg1;
@end

