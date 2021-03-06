//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSTimer;

@interface SCLensSideButtonImageProvider : NSObject
{
    NSTimer *_changeImageTimer;
    NSDictionary *_dateToImageName;
    id <SCLensUserProvider> _lensUserProvider;
    id <SCLensSideButtonImageProviderDelegate> _delegate;
}

+ (id)_endDate;
+ (id)_startDate;
@property(nonatomic) __weak id <SCLensSideButtonImageProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timerFired:(id)arg1;
- (void)_startTimer;
- (id)_imageNameForDate:(id)arg1;
- (void)_fillDateToImageNameMap;
- (id)tooltipImages;
- (id)buttonImage;
- (id)initWithLensUserProvider:(id)arg1;

@end

