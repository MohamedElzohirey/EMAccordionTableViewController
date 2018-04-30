//
//  EMAccordionSection.h
//  UChat
//
//  Created by Ennio Masi on 10/01/14.
//  Copyright (c) 2014 Hippocrates Sintech. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMAccordionSection : NSObject

@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) UIColor *titleColor;
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, strong) NSNumber*isNew;
@property (nonatomic, strong) NSNumber*hasDiscount;
@property (nonatomic, strong) UIColor*seperatorColor;
@property (nonatomic, strong) NSNumber*seperatorMargin;
@property (nonatomic, strong) NSNumber*seperatorHeight;
@property (nonatomic, strong) NSNumber*hasSeperator;

@end
