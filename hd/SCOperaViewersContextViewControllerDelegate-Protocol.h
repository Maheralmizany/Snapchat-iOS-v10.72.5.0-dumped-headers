//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCOperaViewersContextViewController, UIScrollView, UIView;

@protocol SCOperaViewersContextViewControllerDelegate <NSObject>
- (void)viewersContextViewController:(SCOperaViewersContextViewController *)arg1 didUpdateScrollView:(UIScrollView *)arg2;
- (void)didLoadContextCellAtRow:(long long)arg1;
- (void)viewersContextViewController:(SCOperaViewersContextViewController *)arg1 didTapAvatarView:(UIView *)arg2 forUsername:(NSString *)arg3 displayName:(NSString *)arg4;
- (void)viewersContextViewController:(SCOperaViewersContextViewController *)arg1 showMiniProfileWithUsername:(NSString *)arg2 displayName:(NSString *)arg3;
- (void)setCenterActionButtonType:(long long)arg1;
- (void)centerActionButtonPressed;
- (void)deleteButtonPressed;
- (void)saveButtonPressed;
- (void)postButtonPressed;
- (void)headerAreaButtonPressed;
@end
