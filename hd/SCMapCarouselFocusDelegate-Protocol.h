//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@protocol SCMapCarouselFocusDelegate <NSObject>
- (void)mapCarouselRowWantsToResignFocus:(id <SCMapCarouselRow>)arg1 andGetNonfocusedCounterpartForRowWithCompletion:(void (^)(id <SCMapCarouselRow>))arg2;
- (void)mapCarouselRowWantsToBeFocused:(id <SCMapCarouselRow>)arg1 withBaseViewController:(UIViewController *)arg2;
@end

