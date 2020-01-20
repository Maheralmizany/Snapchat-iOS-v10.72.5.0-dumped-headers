//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCScrollToEndDetector : NSObject
{
    double _lastContentOffset;
    long long _detectorType;
    id <SCScrollToEndDetectorDelegate> _delegate;
}

@property(nonatomic) __weak id <SCScrollToEndDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isWithinEndArea:(id)arg1;
- (void)_updateLastContentOffset:(id)arg1;
- (_Bool)_isScrollToEnd:(id)arg1;
- (double)_distanceFromContentEndToScrollViewEnd:(id)arg1;
- (void)updateOnScroll:(id)arg1;
- (id)initWithDetectorType:(long long)arg1;

@end
