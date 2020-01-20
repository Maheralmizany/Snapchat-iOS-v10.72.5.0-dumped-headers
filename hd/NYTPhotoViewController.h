//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NYTPhotoContainer.h"
#import "UIScrollViewDelegate.h"

@class NSNotificationCenter, NSString, NYTScalingImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface NYTPhotoViewController : UIViewController <UIScrollViewDelegate, NYTPhotoContainer>
{
    NYTScalingImageView *_scalingImageView;
    UIView *_loadingView;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    id <NYTPhotoViewControllerDelegate> _delegate;
    id <NYTPhoto> _photo;
    NSNotificationCenter *_notificationCenter;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <NYTPhoto> photo; // @synthesize photo=_photo;
@property(nonatomic) __weak id <NYTPhotoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NYTScalingImageView *scalingImageView; // @synthesize scalingImageView=_scalingImageView;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)didLongPressWithGestureRecognizer:(id)arg1;
- (void)didDoubleTapWithGestureRecognizer:(id)arg1;
- (void)setupGestureRecognizers;
- (void)updateImage:(id)arg1 imageData:(id)arg2;
- (void)photoImageUpdatedWithNotification:(id)arg1;
- (void)setupLoadingView:(id)arg1;
- (void)commonInitWithPhoto:(id)arg1 loadingView:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithPhoto:(id)arg1 loadingView:(id)arg2 notificationCenter:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

