//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMSPolyline.h"

@class MMPolylineRender;

@interface MMGooglePolylineRender : GMSPolyline
{
    MMPolylineRender *_standardRender;
}

@property(retain, nonatomic) MMPolylineRender *standardRender; // @synthesize standardRender=_standardRender;
- (void).cxx_destruct;
- (void)applyDataProperties:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (id)initWithRender:(id)arg1;

@end
