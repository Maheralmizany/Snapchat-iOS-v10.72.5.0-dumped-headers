//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@protocol SCBloopsExportPresenter <NSObject>
- (void)presentSharingViewFrom:(UIViewController *)arg1 nickName:(NSString *)arg2 withBloopsModel:(id <SCBloopsModel>)arg3 completion:(void (^)(NSString *, _Bool, NSError *))arg4;
@end

