//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIView;

@protocol SCOperaViewProvider <NSObject>
- (void)updateView:(UIView *)arg1 withUpdatedProperties:(NSDictionary *)arg2 completion:(void (^)(UIView *))arg3;
- (void)viewForProperties:(NSDictionary *)arg1 completion:(void (^)(UIView *))arg2;
@end

