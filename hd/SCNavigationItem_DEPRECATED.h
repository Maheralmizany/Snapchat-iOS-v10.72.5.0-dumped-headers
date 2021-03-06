//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOverscrolling.h"

@class NSArray, NSString, UIColor, UIImageView;

@interface SCNavigationItem_DEPRECATED : NSObject <SCOverscrolling>
{
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_centerBarButtonItems;
    NSString *_title;
    UIColor *_titleColor;
    UIColor *_backgroundColor;
    UIImageView *_gradientImageView;
    id <SCNavigationItem_DEPRECATEDDelegate> _delegate;
    double _overscrollPercent;
}

@property(nonatomic) double overscrollPercent; // @synthesize overscrollPercent=_overscrollPercent;
@property(nonatomic) __weak id <SCNavigationItem_DEPRECATEDDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *centerBarButtonItems; // @synthesize centerBarButtonItems=_centerBarButtonItems;
@property(copy, nonatomic) NSArray *rightBarButtonItems; // @synthesize rightBarButtonItems=_rightBarButtonItems;
@property(copy, nonatomic) NSArray *leftBarButtonItems; // @synthesize leftBarButtonItems=_leftBarButtonItems;
- (void).cxx_destruct;
- (void)updatePercentOverscrolled:(double)arg1;
- (void)removeBarButtonItemsInItems:(id)arg1;
- (void)updateInteractiveTransition:(double)arg1 shouldScale:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

