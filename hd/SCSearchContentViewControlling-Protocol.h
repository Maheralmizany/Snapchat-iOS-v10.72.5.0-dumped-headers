//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSearchContentViewControllerContext;

@protocol SCSearchContentViewControlling <NSObject>
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext;

@optional
- (_Bool)shouldBeginInteractiveDismissalGesture;
- (void)didTapCloseButton;
- (void)searchControllerDidTapClearButton;
- (void)searchControllerDidEndEditing;
- (void)searchControllerDidBeginEditing;
- (void)searchControllerDidChangeToText:(NSString *)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (_Bool)searchControllerShouldReturnWithSearchText:(NSString *)arg1;
@end

