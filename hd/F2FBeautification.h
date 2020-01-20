//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface F2FBeautification : NSObject
{
    struct shared_ptr<const BeautificationModel> beautificationModel;
}

+ (id)placeOnBackground:(id)arg1 background:(id)arg2;
+ (id)placeOnBackgroundWithRotation:(id)arg1 background:(id)arg2 angle:(float)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)generateTransparentIcon:(id)arg1 size:(struct CGSize)arg2 targetAttributes:(id)arg3;
- (id)generateTransparentIcon:(id)arg1 size:(struct CGSize)arg2;
- (id)process:(id)arg1;
- (id)initWith:(id)arg1;

@end

