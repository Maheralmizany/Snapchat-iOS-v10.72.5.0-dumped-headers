//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LSATouchHandlingDescriptor : NSObject
{
    struct TouchHandlingPromise _touchHandlingPromise;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldAllowTouchAtNormalizedPoint:(struct CGPoint)arg1 touchTypeMask:(unsigned long long)arg2;
- (id)initWithTouchHandlingPromise:(struct TouchHandlingPromise)arg1;

@end
